// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSSEARCHQUERY_H
#define TPSSEARCHQUERY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TPSSearchQuery : NSObject {
    ? identifier;
    ? searchTerm;
    ? rankingModifier;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) BOOL isCancelled; // ivar: isCancelled
@property (nonatomic) NSInteger matchingStyle; // ivar: matchingStyle
@property (nonatomic) NSInteger maxCount; // ivar: maxCount
@property (nonatomic) NSUInteger options; // ivar: options
@property (nonatomic, copy) id *rankingModifier;
@property (nonatomic, copy) NSString *searchTerm;


+(id)escapeSearchTerm:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 searchTerm:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 searchTerm:(id)arg1 options:(NSUInteger)arg2 matchingStyle:(NSInteger)arg3 ;
-(id)makeCSQueryWith:(id)arg0 ;


@end


#endif