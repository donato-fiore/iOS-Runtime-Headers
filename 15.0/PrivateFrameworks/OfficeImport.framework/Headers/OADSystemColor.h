// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADSYSTEMCOLOR_H
#define OADSYSTEMCOLOR_H



#import "OADColor.h"

@interface OADSystemColor : OADColor {
    int mSystemColorID;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSystemColorID:(int)arg0 ;
-(int)systemColorID;


@end


#endif