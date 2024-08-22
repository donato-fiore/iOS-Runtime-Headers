// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVSYSTEMDIALOGRESPONSE_H
#define MSVSYSTEMDIALOGRESPONSE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MSVSystemDialogResponse : NSObject

@property (readonly, nonatomic) NSInteger buttonIdentifier; // ivar: _buttonIdentifier
@property (readonly, nonatomic) NSArray *textFieldValues; // ivar: _textFieldValues


-(id)description;
-(id)initWithIdentifier:(NSInteger)arg0 textFieldValues:(id)arg1 ;


@end


#endif