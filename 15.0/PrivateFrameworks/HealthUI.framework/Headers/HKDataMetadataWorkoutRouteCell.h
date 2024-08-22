// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDATAMETADATAWORKOUTROUTECELL_H
#define HKDATAMETADATAWORKOUTROUTECELL_H

@class UITableViewCell, UIActivityIndicatorView, NSLayoutConstraint, UIImageView;



@interface HKDataMetadataWorkoutRouteCell : UITableViewCell

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) UIImageView *routeImageView; // ivar: _routeImageView


-(id)init;
-(void)setRouteImage:(id)arg0 ;
-(void)setupConstraints;


@end


#endif