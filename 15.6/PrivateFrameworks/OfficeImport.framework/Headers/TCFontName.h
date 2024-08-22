// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCFONTNAME_H
#define TCFONTNAME_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TCFontName : NSObject

@property (readonly, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly, nonatomic) NSString *styleName; // ivar: _styleName


-(id)description;
-(id)equivalentDictionary;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithStyleName:(id)arg0 fullName:(id)arg1 ;


@end


#endif