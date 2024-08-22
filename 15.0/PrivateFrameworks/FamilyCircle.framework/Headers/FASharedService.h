// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FASHAREDSERVICE_H
#define FASHAREDSERVICE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface FASharedService : NSObject

@property (readonly, nonatomic) NSString *actionURLString; // ivar: _actionURLString
@property (readonly, nonatomic) NSString *detailLabel; // ivar: _detailLabel
@property (readonly, nonatomic) NSString *displayLabel; // ivar: _displayLabel
@property (readonly, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) NSString *iconURLString; // ivar: _iconURLString
@property (readonly, nonatomic) NSString *iconURLStringx2; // ivar: _iconURLStringx2
@property (readonly, nonatomic) NSString *iconURLStringx3; // ivar: _iconURLStringx3
@property (readonly, nonatomic) BOOL isDefault; // ivar: _isDefault
@property (readonly, nonatomic) BOOL isSeparator; // ivar: _isSeparator
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSNumber *order; // ivar: _order
@property (readonly, nonatomic) NSString *subLabel; // ivar: _subLabel


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSharedService:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif