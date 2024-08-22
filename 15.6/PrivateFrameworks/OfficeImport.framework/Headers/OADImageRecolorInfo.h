// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADIMAGERECOLORINFO_H
#define OADIMAGERECOLORINFO_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface OADImageRecolorInfo : NSObject {
    NSDictionary *mColors;
    NSDictionary *mFills;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)colors;
-(id)description;
-(id)fills;
-(id)initWithColors:(id)arg0 fills:(id)arg1 ;


@end


#endif