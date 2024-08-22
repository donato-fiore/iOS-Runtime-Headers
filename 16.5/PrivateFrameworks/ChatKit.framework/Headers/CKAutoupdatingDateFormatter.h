// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAUTOUPDATINGDATEFORMATTER_H
#define CKAUTOUPDATINGDATEFORMATTER_H

@class NSDateFormatter, NSString;



@interface CKAutoupdatingDateFormatter : NSDateFormatter

@property (copy, nonatomic) NSString *template; // ivar: _template


-(id)initWithTemplate:(id)arg0 ;
-(id)notificationCenter;
-(void)dealloc;
-(void)updateDateFormat;


@end


#endif