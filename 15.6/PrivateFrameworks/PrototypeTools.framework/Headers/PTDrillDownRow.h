// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTDRILLDOWNROW_H
#define PTDRILLDOWNROW_H

@class NSString;


#import "PTSRow.h"
#import "PTSettings.h"

@interface PTDrillDownRow : PTSRow {
    PTSettings *_childSettings;
}


@property (readonly, nonatomic) NSString *childKeyPath; // ivar: _childKeyPath


+(BOOL)supportsSecureCoding;
+(id)rowWithTitle:(id)arg0 childSettingsKeyPath:(id)arg1 ;
+(id)rowWithTitleKeyPath:(id)arg0 childSettingsKeyPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithChildKeyPath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)value;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setSettings:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;


@end


#endif