// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCKEYVALUESECTION_H
#define MCKEYVALUESECTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface MCKeyValueSection : NSObject

@property (retain, nonatomic) NSString *sectionFooter; // ivar: _sectionFooter
@property (retain, nonatomic) NSArray *sectionKeyValues; // ivar: _sectionKeyValues
@property (retain, nonatomic) NSString *sectionTitle; // ivar: _sectionTitle


+(id)sectionWithKeyValues:(id)arg0 ;
+(id)sectionWithLocalizedArray:(id)arg0 title:(id)arg1 footer:(id)arg2 ;
-(id)initWithSectionTitle:(id)arg0 footer:(id)arg1 keyValues:(id)arg2 ;


@end


#endif