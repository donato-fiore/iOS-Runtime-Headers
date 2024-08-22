// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVNLPTEXTDECODINGCONTEXT_H
#define CVNLPTEXTDECODINGCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CVNLPTextDecodingContext : NSObject

@property (readonly, nonatomic) _NSRange activeRange; // ivar: _activeRange
@property (readonly, nonatomic) NSString *history; // ivar: _history


-(id)activeSubstring;
-(id)inactiveSubstring;
-(id)initWithHistory:(id)arg0 ;
-(id)initWithHistory:(id)arg0 activeRange:(struct _NSRange )arg1 ;


@end


#endif