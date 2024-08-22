// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKIMPORTANALYTICS_H
#define MKIMPORTANALYTICS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MKImportAnalytics : NSObject {
    NSString *_contentType;
}




+(void)initialize;
-(id)initWithContentType:(NSInteger)arg0 ;
-(void)complete:(BOOL)arg0 ;
-(void)send:(id)arg0 ;
-(void)send:(id)arg0 extension:(id)arg1 ;


@end


#endif