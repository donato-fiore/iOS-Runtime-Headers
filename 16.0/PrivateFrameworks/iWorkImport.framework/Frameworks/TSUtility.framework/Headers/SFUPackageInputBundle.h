// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUPACKAGEINPUTBUNDLE_H
#define SFUPACKAGEINPUTBUNDLE_H

@class NSString;
@protocol SFUInputBundle;

#import <Foundation/Foundation.h>


@interface SFUPackageInputBundle : NSObject <SFUInputBundle>

 {
    NSString *_rootPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasEntryWithName:(id)arg0 ;
-(NSInteger)lengthOfEntry:(id)arg0 ;
-(id)_existingPathForEntryName:(id)arg0 isGz:(*BOOL)arg1 ;
-(id)bufferedInputStreamForEntry:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)inputStreamForEntry:(id)arg0 ;
-(unsigned int)crc32ForEntry:(id)arg0 ;
-(void)copyEntry:(id)arg0 toFile:(id)arg1 ;
-(void)dealloc;


@end


#endif