// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMBULLETMAPPER_H
#define PMBULLETMAPPER_H



#import "CMMapper.h"
#import "OADParagraphProperties.h"
#import "CMStyle.h"

@interface PMBulletMapper : CMMapper {
    OADParagraphProperties *mProperties;
    CMStyle *mStyle;
    int mFontSize;
}




+(id)stringForIndex:(NSUInteger)arg0 withFormat:(int)arg1 ;
-(id)bulletFontName;
-(id)initWithOadProperties:(id)arg0 fontSize:(int)arg1 parent:(id)arg2 ;
-(id)makeBulletWithListState:(id)arg0 ;
-(int)bulletSize;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapBulletColorWithState:(id)arg0 ;


@end


#endif