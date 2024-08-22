// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADCOLORMAP_H
#define OADCOLORMAP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface OADColorMap : NSObject {
    NSMutableDictionary *mMappings;
}




-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(int)mappingForIndex:(int)arg0 ;
-(void)addDefaultMappings:(BOOL)arg0 ;
-(void)addMapping:(int)arg0 index:(int)arg1 ;


@end


#endif