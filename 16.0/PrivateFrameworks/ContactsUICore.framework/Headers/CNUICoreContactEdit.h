// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICORECONTACTEDIT_H
#define CNUICORECONTACTEDIT_H

@class CNContact;

#import <Foundation/Foundation.h>


@interface CNUICoreContactEdit : NSObject

@property (readonly, nonatomic) CNContact *modified; // ivar: _modified
@property (readonly, nonatomic) CNContact *original; // ivar: _original
@property (readonly, nonatomic) BOOL originalAndModifiedDiffer;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)modifiesContact:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)editBySettingModifiedContact:(id)arg0 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithOriginalContact:(id)arg0 modifiedContact:(id)arg1 ;


@end


#endif