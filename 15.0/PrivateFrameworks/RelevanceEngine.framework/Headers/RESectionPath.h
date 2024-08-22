// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RESECTIONPATH_H
#define RESECTIONPATH_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RESectionPath : NSObject <NSCopying>

 {
    NSString *_sectionName;
}


@property (nonatomic) NSUInteger element; // ivar: _element
@property (readonly, copy, nonatomic) NSString *sectionName;


+(id)sectionPathWithSectionName:(id)arg0 element:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSectionName:(id)arg0 element:(NSUInteger)arg1 ;


@end


#endif