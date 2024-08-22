// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACIMPORTEXPORTRESULT_H
#define CACIMPORTEXPORTRESULT_H

@class NSError, NSString;

#import <Foundation/Foundation.h>


@interface CACImportExportResult : NSObject

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithError:(id)arg0 title:(id)arg1 message:(id)arg2 ;
-(void)displayAlertForViewController:(id)arg0 ;


@end


#endif