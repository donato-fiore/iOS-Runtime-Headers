// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADTABLESTYLECOLLECTION_H
#define OADTABLESTYLECOLLECTION_H

@class NSMutableArray, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface OADTableStyleCollection : NSObject {
    NSMutableArray *_styles;
    NSMutableDictionary *_styleMap;
}


@property (copy, nonatomic) NSString *defaultTableStyleId; // ivar: _defaultTableStyleId


-(id)init;
-(id)tableStyleWithId:(id)arg0 ;
-(id)tableStyles;
-(void)addTableStyle:(id)arg0 ;


@end


#endif