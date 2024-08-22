// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKJSONVISITOR_H
#define HKJSONVISITOR_H

@class NSArray, NSString;
@protocol HKJSONVisitorDelegate;

#import <Foundation/Foundation.h>


@interface HKJSONVisitor : NSObject {
    id<HKJSONVisitorDelegate> *_delegate;
    id *_JSONObject;
}


@property (readonly, copy, nonatomic) NSArray *allKeyPathComponents; // ivar: _allKeyPathComponents
@property (readonly, nonatomic) NSInteger currentIndex; // ivar: _currentIndex
@property (readonly, copy, nonatomic) NSString *currentKeyPath; // ivar: _currentKeyPath
@property (readonly, copy, nonatomic) NSString *lastKeyPathComponent;


+(id)visitorWithJSONObject:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(NSInteger)_traverseJSONObject:(id)arg0 ;
-(NSInteger)_visitArray:(id)arg0 ;
-(NSInteger)_visitDictionary:(id)arg0 ;
-(NSInteger)_visitPrimitive:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(void)traverseJSONObject;


@end


#endif