// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCOFFICEFONTINFO_H
#define TCOFFICEFONTINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TCOfficeFontInfo : NSObject

@property (readonly, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly, nonatomic) BOOL isBold; // ivar: _isBold
@property (readonly, nonatomic) BOOL isItalic; // ivar: _isItalic


+(id)officeFontInfoWithFullName:(id)arg0 isBold:(BOOL)arg1 isItalic:(BOOL)arg2 ;
-(id)description;
-(id)initWithFullName:(id)arg0 isBold:(BOOL)arg1 isItalic:(BOOL)arg2 ;
-(id)officeName;


@end


#endif