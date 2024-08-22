// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEO_ISOLATER_H
#define GEO_ISOLATER_H


#import <Foundation/Foundation.h>


@interface geo_isolater : NSObject {
    char * _name;
    os_unfair_lock_s _lock;
}




-(id)debugDescription;
-(id)description;
-(id)initWithName:(char *)arg0 ;
-(void)dealloc;


@end


#endif