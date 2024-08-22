// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BAAPPSTOREPROGRESSINFODESCRIPTOR_H
#define BAAPPSTOREPROGRESSINFODESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding, BAAppStoreProgressInfo;

#import <Foundation/Foundation.h>


@interface BAAppStoreProgressInfoDescriptor : NSObject <NSSecureCoding, BAAppStoreProgressInfo>



@property (readonly, nonatomic) NSInteger countOfBytesExpectedToReceive; // ivar: _countOfBytesExpectedToReceive
@property (readonly, nonatomic) NSInteger countOfBytesReceived; // ivar: _countOfBytesReceived
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger progressState; // ivar: _progressState
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif