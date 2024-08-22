// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSPERSONALIZATIONCELLCONTEXT_H
#define PKPASSPERSONALIZATIONCELLCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKPassPersonalizationCellContext : NSObject

@property (nonatomic) NSInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (nonatomic) BOOL bindTextToStringRepresentation; // ivar: _bindTextToStringRepresentation
@property (copy, nonatomic) id *contactUpdateBlock; // ivar: _contactUpdateBlock
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (nonatomic) CGFloat minimumTextLabelWidth; // ivar: _minimumTextLabelWidth
@property (copy, nonatomic) id *stringRepresentationBlock; // ivar: _stringRepresentationBlock
@property (copy, nonatomic) NSString *title; // ivar: _title




@end


#endif