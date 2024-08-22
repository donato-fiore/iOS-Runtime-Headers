// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITCONTRASTRESULT_H
#define AXAUDITCONTRASTRESULT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AXAuditContrastResult : NSObject

@property (nonatomic) NSInteger classification; // ivar: _classification
@property (readonly, nonatomic) NSArray *compareColors;
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (copy, nonatomic) NSString *primaryColor; // ivar: _primaryColor
@property (nonatomic) CGFloat ratio; // ivar: _ratio
@property (copy, nonatomic) NSString *secondaryColor; // ivar: _secondaryColor
@property (readonly, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *textColor; // ivar: _textColor


-(id)description;
-(id)init;


@end


#endif