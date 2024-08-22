// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDIALOGATTRIBUTIONS_H
#define WFDIALOGATTRIBUTIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFDialogAttribution.h"

@interface WFDialogAttributions : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) WFDialogAttribution *defaultAttribution; // ivar: _defaultAttribution
@property (readonly, nonatomic) WFDialogAttribution *workflowAttribution; // ivar: _workflowAttribution


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif