// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADFONTSCHEME_H
#define OADFONTSCHEME_H

@class NSString;

#import <Foundation/Foundation.h>

#import "OADFontCollection.h"

@interface OADFontScheme : NSObject

@property (readonly, nonatomic) OADFontCollection *majorFont; // ivar: _majorFont
@property (readonly, nonatomic) OADFontCollection *minorFont; // ivar: _minorFont
@property (copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)fontForId:(int)arg0 ;
-(id)init;
-(void)validateFontScheme;


@end


#endif