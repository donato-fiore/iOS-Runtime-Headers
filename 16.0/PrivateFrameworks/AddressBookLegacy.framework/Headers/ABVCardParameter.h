// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABVCARDPARAMETER_H
#define ABVCARDPARAMETER_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface ABVCardParameter : NSObject {
    NSString *_name;
    NSString *_grouping;
    id *_value;
    NSMutableArray *_types;
    BOOL _primary;
}




-(BOOL)isPrimary;
-(id)description;
-(id)grouping;
-(id)initWithName:(id)arg0 ;
-(id)name;
-(id)types;
-(id)value;
-(void)addType:(id)arg0 ;
-(void)addTypes:(id)arg0 ;
-(void)dealloc;
-(void)setGrouping:(id)arg0 ;
-(void)setIsPrimary:(BOOL)arg0 ;
-(void)setValue:(id)arg0 ;


@end


#endif