// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUASSOCIATEDSERVICETYPEOPTIONCELL_H
#define HUASSOCIATEDSERVICETYPEOPTIONCELL_H

@class UITableViewCell, NSString;
@protocol HUDisableableCellProtocol;



@interface HUAssociatedServiceTypeOptionCell : UITableViewCell <HUDisableableCellProtocol>



@property (nonatomic, getter=isChecked) BOOL checked; // ivar: _checked
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isSuggestion) BOOL suggestion; // ivar: _suggestion
@property (readonly) Class superclass;


-(id)colorForCurrentState;
-(void)prepareForReuse;


@end


#endif