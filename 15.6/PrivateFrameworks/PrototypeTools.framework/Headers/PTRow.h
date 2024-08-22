// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTROW_H
#define PTROW_H

@class NSHashTable, NSPredicate, NSString, UIImage;
@protocol PTSettingsKeyPathObserver, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PTRowAction.h"
#import "PTSection.h"
#import "PTSettings.h"

@interface PTRow : NSObject <PTSettingsKeyPathObserver, NSCopying, NSSecureCoding>

 {
    NSHashTable *_observers;
}


@property (retain, nonatomic) PTRowAction *action; // ivar: _action
@property (copy, nonatomic) NSPredicate *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *externalCondition; // ivar: _externalCondition
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *imageKeyPath; // ivar: _imageKeyPath
@property (nonatomic) BOOL isEncodable; // ivar: _isEncodable
@property (weak, nonatomic) PTSection *section; // ivar: _section
@property (retain, nonatomic) PTSettings *settings; // ivar: _settings
@property (retain, nonatomic) UIImage *staticImage; // ivar: _staticImage
@property (copy, nonatomic) NSString *staticTitle; // ivar: _staticTitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *titleKeyPath; // ivar: _titleKeyPath
@property (copy, nonatomic) id *unregisterBlock; // ivar: _unregisterBlock
@property (retain, nonatomic) id *value;
@property (copy, nonatomic) id *valueFormatter; // ivar: _valueFormatter
@property (copy, nonatomic) id *valueGetter; // ivar: _valueGetter
@property (copy, nonatomic) NSString *valueKeyPath; // ivar: _valueKeyPath
@property (copy, nonatomic) id *valueSetter; // ivar: _valueSetter
@property (copy, nonatomic) id *valueValidatator; // ivar: _valueValidatator


+(BOOL)supportsSecureCoding;
+(id)row;
// +(id)rowWithTitle:(id)arg0 valueGetter:(id)arg1 valueSetter:(unk)arg2  ;
+(id)rowWithTitle:(id)arg0 valueKeyPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_defaultAction;
-(id)_validatedValue:(id)arg0 ;
-(id)action:(id)arg0 ;
-(id)childSettingsForKeyPath:(id)arg0 ;
-(id)condition:(id)arg0 ;
-(id)conditionFormat:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)image;
-(id)imageKeyPath:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)staticImage:(id)arg0 ;
-(id)staticTitle:(id)arg0 ;
-(id)title;
-(id)titleKeyPath:(id)arg0 ;
-(id)valueFormatter:(id)arg0 ;
-(id)valueKeyPath:(id)arg0 ;
-(id)valueValidator:(id)arg0 ;
-(void)_sendImageChanged;
-(void)_sendRowDidReload;
-(void)_sendTitleChanged;
-(void)_sendValueChanged;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reloadRow;
-(void)removeObserver:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;


@end


#endif