// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANNOTIFICATIONACTION_H
#define ANNOTIFICATIONACTION_H

@class NSString, NSDictionary, NSURL;
@protocol NSSecureCoding, ANCachedDictionaryRepresentationProtocol;

#import <Foundation/Foundation.h>


@interface ANNotificationAction : NSObject <NSSecureCoding, ANCachedDictionaryRepresentationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInternalURL; // ivar: _isInternalURL
@property (copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)actionForLaunchingApp:(id)arg0 ;
+(id)actionForLaunchingApp:(id)arg0 withOptions:(id)arg1 ;
+(id)actionForOpeningWebURL:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithManagedObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)perform;


@end


#endif