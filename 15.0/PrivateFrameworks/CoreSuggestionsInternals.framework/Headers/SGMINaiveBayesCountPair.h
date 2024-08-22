// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMINAIVEBAYESCOUNTPAIR_H
#define SGMINAIVEBAYESCOUNTPAIR_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface SGMINaiveBayesCountPair : NSObject

@property (readonly) NSNumber *regularCount; // ivar: _regularCount
@property (readonly) NSNumber *salientCount; // ivar: _salientCount


-(id)init;
-(id)initWithCount:(id)arg0 asSalient:(BOOL)arg1 ;
-(id)initWithSalientCount:(id)arg0 regularCount:(id)arg1 ;
-(id)newByAdding:(id)arg0 asSalient:(BOOL)arg1 ;


@end


#endif