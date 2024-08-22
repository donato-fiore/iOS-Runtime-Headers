// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWOUTBOUNDMESSAGE_H
#define NWOUTBOUNDMESSAGE_H



#import "NWMessage.h"

@interface NWOutboundMessage : NWMessage

@property (nonatomic) NSUInteger expirationMilliseconds;
@property (nonatomic) CGFloat relativePriority;


-(id)initWithContent:(id)arg0 ;
-(void)addAntecedent:(id)arg0 ;


@end


#endif