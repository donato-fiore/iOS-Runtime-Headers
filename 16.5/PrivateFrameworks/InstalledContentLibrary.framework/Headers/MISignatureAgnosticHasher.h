// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MISIGNATUREAGNOSTICHASHER_H
#define MISIGNATUREAGNOSTICHASHER_H

@class NSDictionary, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface MISignatureAgnosticHasher : NSObject

@property (nonatomic) unsigned int countOfSlicesWithNamedSection; // ivar: _countOfSlicesWithNamedSection
@property (nonatomic) int fd; // ivar: _fd
@property (readonly, nonatomic) BOOL hasNamedSection; // ivar: _hasNamedSection
@property (readonly, nonatomic) NSDictionary *hashes; // ivar: _hashes
@property (readonly, nonatomic) NSString *sectionName; // ivar: _sectionName
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)packedNumberForCPUType:(int)arg0 subtype:(int)arg1 ;
+(void)unpackPackedCpuTypeAndSubType:(id)arg0 cputype:(*int)arg1 subtype:(*int)arg2 ;
-(BOOL)performHashWithError:(*id)arg0 ;
-(id)_hashSliceAtOffset:(NSInteger)arg0 withSize:(NSInteger)arg1 machHeaderAndCommands:(struct mach_header *)arg2 dictionaryKey:(*id)arg3 error:(*id)arg4 ;
-(id)initWithExecutable:(id)arg0 searchForSectionNamed:(id)arg1 ;
-(void)dealloc;


@end


#endif