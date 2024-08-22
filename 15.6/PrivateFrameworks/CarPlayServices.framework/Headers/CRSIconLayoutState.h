// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRSICONLAYOUTSTATE_H
#define CRSICONLAYOUTSTATE_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRSIconLayoutState : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger columns; // ivar: _columns
@property (nonatomic) BOOL displaysOEMIcon; // ivar: _displaysOEMIcon
@property (readonly, nonatomic) NSArray *hiddenIcons; // ivar: _hiddenIcons
@property (retain, nonatomic) NSString *oemIconLabel; // ivar: _oemIconLabel
@property (readonly, nonatomic) NSArray *pages; // ivar: _pages
@property (nonatomic) NSUInteger rows; // ivar: _rows


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)iconOrder;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPages:(id)arg0 hiddenIcons:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif