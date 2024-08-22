// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPSPOTLIGHTINDEXSTATE_H
#define FPSPOTLIGHTINDEXSTATE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface FPSpotlightIndexState : NSObject

@property (readonly, nonatomic) NSData *dataRepresentation;
@property (readonly, nonatomic) NSData *lastChangeToken; // ivar: _lastChangeToken
@property (readonly, nonatomic) NSData *lastPage; // ivar: _lastPage
@property (readonly, nonatomic) NSUInteger phase;


+(BOOL)supportsSecureCoding;
+(id)stateWithData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithChangeToken:(id)arg0 ;
-(id)initWithPage:(id)arg0 changeToken:(id)arg1 ;


@end


#endif