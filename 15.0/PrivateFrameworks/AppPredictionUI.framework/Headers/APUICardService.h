// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APUICARDSERVICE_H
#define APUICARDSERVICE_H

@class NSString;
@protocol CRSCardServing, CRSIdentifiedServing;

#import <Foundation/Foundation.h>


@interface APUICardService : NSObject <CRSCardServing, CRSIdentifiedServing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *serviceIdentifier;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)canSatisfyCardRequest:(id)arg0 ;
-(NSUInteger)servicePriorityForRequest:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)requestCard:(id)arg0 reply:(id)arg1 ;


@end


#endif