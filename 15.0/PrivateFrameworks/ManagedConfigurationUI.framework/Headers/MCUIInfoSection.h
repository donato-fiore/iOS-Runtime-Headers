// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCUIINFOSECTION_H
#define MCUIINFOSECTION_H

@class NSAttributedString, NSString;

#import <Foundation/Foundation.h>


@interface MCUIInfoSection : NSObject

@property (copy, nonatomic) NSAttributedString *sectionAttribtuedText; // ivar: _sectionAttribtuedText
@property (copy, nonatomic) NSString *sectionFooter; // ivar: _sectionFooter
@property (copy, nonatomic) NSString *sectionText; // ivar: _sectionText
@property (copy, nonatomic) NSString *sectionTitle; // ivar: _sectionTitle


-(id)initWithSectionTitle:(id)arg0 footer:(id)arg1 attributedText:(id)arg2 ;
-(id)initWithSectionTitle:(id)arg0 footer:(id)arg1 text:(id)arg2 ;


@end


#endif