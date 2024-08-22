// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCPROFILEINFOSECTION_H
#define DMCPROFILEINFOSECTION_H

@class NSAttributedString, NSString;

#import <Foundation/Foundation.h>


@interface DMCProfileInfoSection : NSObject

@property (copy, nonatomic) NSAttributedString *sectionAttributedText; // ivar: _sectionAttributedText
@property (copy, nonatomic) NSString *sectionFooter; // ivar: _sectionFooter
@property (copy, nonatomic) NSString *sectionText; // ivar: _sectionText
@property (copy, nonatomic) NSString *sectionTitle; // ivar: _sectionTitle


-(id)initWithSectionTitle:(id)arg0 footer:(id)arg1 attributedText:(id)arg2 ;
-(id)initWithSectionTitle:(id)arg0 footer:(id)arg1 text:(id)arg2 ;


@end


#endif