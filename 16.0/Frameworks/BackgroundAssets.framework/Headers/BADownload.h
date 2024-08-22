// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BADOWNLOAD_H
#define BADOWNLOAD_H

@class NSString, NSError;
@protocol NSCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BADownload : NSObject <NSCoding, NSSecureCoding, NSCopying>

 {
    NSInteger _internalState;
}


@property (retain) NSString *applicationGroupIdentifier; // ivar: _applicationGroupIdentifier
@property (retain) NSError *error; // ivar: _error
@property (retain) NSString *expectedOutFileName; // ivar: _expectedOutFileName
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, setter=setInternalState:) NSInteger internalState;
@property NSInteger priority; // ivar: _priority
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)classesForSerialization;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)moveDownloadToFinalDestinationPathWithStagedURL:(id)arg0 outDestinationURL:(*id)arg1 outError:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initPrivatelyWithApplicationGroupIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)syncTo:(id)arg0 ;


@end


#endif