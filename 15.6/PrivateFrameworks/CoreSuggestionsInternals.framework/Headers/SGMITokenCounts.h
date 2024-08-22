// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMITOKENCOUNTS_H
#define SGMITOKENCOUNTS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface SGMITokenCounts : NSObject

@property (readonly) NSNumber *regularCount; // ivar: _regularCount
@property (readonly) NSNumber *salientCount; // ivar: _salientCount
@property (readonly) NSString *token; // ivar: _token


-(id)description;
-(id)init;
-(id)initWithCount:(id)arg0 asSalient:(BOOL)arg1 token:(id)arg2 ;
-(id)initWithSalientCount:(id)arg0 regularCount:(id)arg1 token:(id)arg2 ;
-(id)newByAdding:(id)arg0 asSalient:(BOOL)arg1 ;


@end


#endif