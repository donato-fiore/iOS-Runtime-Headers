// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BADOWNLOAD_H
#define BADOWNLOAD_H

@class NSURL, NSString;
@protocol NSCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BADownload : NSObject <NSCoding, NSSecureCoding, NSCopying>

 {
    NSInteger _internalState;
    NSUInteger _clientSpecifiedFileSize;
    NSURL *_stagedDownloadedFileURL;
}


@property (retain) NSString *applicationGroupIdentifier; // ivar: _applicationGroupIdentifier
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) BOOL isEssential;
@property NSInteger necessity; // ivar: _necessity
@property NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSInteger state;
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)classesForSerialization;
-(BOOL)cloneDownloadToFinalDestinationURL:(*id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyAsNonEssential;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initPrivatelyWithApplicationGroupIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)syncTo:(id)arg0 ;


@end


#endif