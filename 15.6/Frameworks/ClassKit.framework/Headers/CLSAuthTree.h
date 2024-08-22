// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSAUTHTREE_H
#define CLSAUTHTREE_H

@class NSMutableDictionary, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLSAuthTree : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_graph;
    NSNumber *_overridingStatus;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)authStatusAtIdentifierPath:(id)arg0 ;
-(NSInteger)authStatusFor:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOverridingStatus:(NSInteger)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 statusID:(id)arg1 identifier:(id)arg2 ;
-(void)_addNode:(id)arg0 parentStatusID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAuthStatus:(NSInteger)arg0 forIdentifier:(id)arg1 statusID:(id)arg2 parentStatusID:(id)arg3 ;


@end


#endif