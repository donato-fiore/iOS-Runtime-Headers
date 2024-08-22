// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CASTATE_H
#define CASTATE_H

@class NSMutableArray, NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CAState : NSObject <NSSecureCoding, NSCopying>

 {
    NSMutableArray *_elements;
}


@property (copy) NSString *basedOn; // ivar: _basedOn
@property (copy, nonatomic) NSArray *elements;
@property (getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (getter=isInitial) BOOL initial; // ivar: _initial
@property (nonatomic, getter=isLocked) BOOL locked; // ivar: _locked
@property (copy, nonatomic) NSString *name; // ivar: _name
@property CGFloat nextDelay; // ivar: _nextDelay
@property CGFloat previousDelay; // ivar: _previousDelay


+(BOOL)supportsSecureCoding;
+(void)CAMLParserStartElement:(id)arg0 ;
-(id)CAMLTypeForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)CAMLParser:(id)arg0 setValue:(id)arg1 forKey:(id)arg2 ;
-(void)addElement:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)foreachLayer:(id)arg0 ;
-(void)removeElement:(id)arg0 ;


@end


#endif