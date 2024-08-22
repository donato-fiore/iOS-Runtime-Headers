// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUTRANSPORTBUTTON_H
#define MRUTRANSPORTBUTTON_H

@class MPCPlayerCommandRequest, NSString;


#import "MRUButton.h"

@interface MRUTransportButton : MRUButton

@property (retain, nonatomic) MPCPlayerCommandRequest *holdBeginCommandRequest; // ivar: _holdBeginCommandRequest
@property (retain, nonatomic) MPCPlayerCommandRequest *holdEndCommandRequest; // ivar: _holdEndCommandRequest
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL shouldPresentActionSheet; // ivar: _shouldPresentActionSheet
@property (retain, nonatomic) MPCPlayerCommandRequest *touchUpInsideCommandRequest; // ivar: _touchUpInsideCommandRequest


-(void)prepareForReuse;


@end


#endif