// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADBASEFONTCOLLECTION_H
#define OADBASEFONTCOLLECTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OADBaseFontCollection : NSObject

@property (copy, nonatomic) NSString *complexScriptFont; // ivar: _complexScriptFont
@property (copy, nonatomic) NSString *eastAsianFont; // ivar: _eastAsianFont
@property (copy, nonatomic) NSString *latinFont; // ivar: _latinFont


-(BOOL)isEmpty;
-(BOOL)isEqualToBaseFontCollection:(id)arg0 ;
-(id)baseFontForId:(int)arg0 ;
-(void)setBaseFont:(id)arg0 forId:(int)arg1 ;


@end


#endif