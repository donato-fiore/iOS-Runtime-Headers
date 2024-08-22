// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKACTION_H
#define OKACTION_H

@class NSMutableDictionary, NSString;
@protocol OKActionExports, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface OKAction : NSObject <OKActionExports, NSSecureCoding>



@property (readonly, retain, nonatomic) NSMutableDictionary *context; // ivar: _context
@property (nonatomic) BOOL isInstantaneous; // ivar: _isInstantaneous
@property (retain, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (nonatomic) CGPoint location; // ivar: _location
@property (readonly, nonatomic) NSUInteger platform; // ivar: _platform
@property (nonatomic) NSUInteger scope; // ivar: _scope
@property (nonatomic) BOOL shouldCancelCouchPotato; // ivar: _shouldCancelCouchPotato
@property (nonatomic) BOOL shouldPropagate; // ivar: _shouldPropagate
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger touchCount; // ivar: _touchCount


+(BOOL)supportsSecureCoding;
+(NSUInteger)directionFromPoint:(struct CGPoint )arg0 ;
+(id)action;
+(id)createContext;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(struct CGPoint )arg0 touchCount:(NSUInteger)arg1 context:(id)arg2 ;
-(id)initWithState:(NSUInteger)arg0 location:(struct CGPoint )arg1 touchCount:(NSUInteger)arg2 context:(id)arg3 ;
-(void)convertFromResponder:(id)arg0 toResponder:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif