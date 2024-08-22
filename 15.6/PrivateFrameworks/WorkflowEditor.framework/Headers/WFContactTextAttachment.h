// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTACTTEXTATTACHMENT_H
#define WFCONTACTTEXTATTACHMENT_H

@class WFContact;


#import "WFValueTextAttachment.h"

@interface WFContactTextAttachment : WFValueTextAttachment

@property (retain, nonatomic) WFContact *value; // ivar: _value


-(id)accessibilityLabel;


@end


#endif