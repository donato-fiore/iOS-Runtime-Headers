// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSNEWSACTIVITYDATA_H
#define TSNEWSACTIVITYDATA_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface TSNewsActivityData : NSObject {
    ? identifier;
    ? traits;
}


@property (nonatomic, readonly) NSInteger activity; // ivar: activity
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id *object; // ivar: object
@property (nonatomic, readonly) NSArray *traits;


+(NSInteger)convertToArticleTraitWithTrait:(NSInteger)arg0 ;
-(id)init;
-(id)initWithActivity:(NSInteger)arg0 identifier:(id)arg1 ;
-(id)initWithActivity:(NSInteger)arg0 identifier:(id)arg1 object:(id)arg2 ;
-(id)initWithActivity:(NSInteger)arg0 identifier:(id)arg1 object:(id)arg2 traits:(id)arg3 ;


@end


#endif