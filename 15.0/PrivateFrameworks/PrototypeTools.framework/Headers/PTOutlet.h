// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTOUTLET_H
#define PTOUTLET_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PTOutlet : NSObject <NSSecureCoding>

 {
    NSUInteger _nextToken;
    NSMutableDictionary *_actionsByToken;
}




+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)addAction:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_invokeActions;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeActionForToken:(id)arg0 ;


@end


#endif