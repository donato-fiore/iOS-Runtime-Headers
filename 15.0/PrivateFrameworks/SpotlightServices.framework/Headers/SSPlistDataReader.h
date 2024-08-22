// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSPLISTDATAREADER_H
#define SSPLISTDATAREADER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface SSPlistDataReader : NSObject {
    *_MDPlistContainer _container;
    ? _obj;
}


@property (readonly, copy, nonatomic) NSMutableArray *allKeys;
@property (readonly, nonatomic) NSArray *blocklist;
@property (readonly, nonatomic) NSUInteger count;


-(BOOL)doesBundleExistInAppAllowList:(id)arg0 ;
-(CGFloat)doubleValueForBundle:(id)arg0 ;
-(CGFloat)doubleValueForKey:(char *)arg0 ;
-(id)description;
-(id)initWithPlistContainer:(struct _MDPlistContainer *)arg0 ;
-(id)initWithPlistContainer:(struct _MDPlistContainer *)arg0 obj:(struct ? )arg1 ;
-(struct _MDPlistContainer *)container;
-(void)dealloc;


@end


#endif