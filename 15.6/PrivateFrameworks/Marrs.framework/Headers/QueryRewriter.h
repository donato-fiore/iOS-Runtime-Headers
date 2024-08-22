// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QUERYREWRITER_H
#define QUERYREWRITER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface QueryRewriter : NSObject {
    unique_ptr<marrs::qr::orchestration::QRPredictor, std::default_delete<marrs::qr::orchestration::QRPredictor>> _plugin;
    NSString *_predictorName;
    int _predictorType;
}


@property (retain, nonatomic) NSString *locale; // ivar: _locale


-(id)initWithLocale:(id)arg0 filesPath:(id)arg1 predictorType:(int)arg2 status:(*id)arg3 ;
-(id)predictWithInput:(id)arg0 status:(*id)arg1 ;


@end


#endif