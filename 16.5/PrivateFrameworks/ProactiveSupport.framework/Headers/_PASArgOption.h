// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASARGOPTION_H
#define _PASARGOPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _PASArgOption : NSObject {
    int _longOptionFlag;
}


@property (readonly, copy, nonatomic) NSString *argMetavar; // ivar: _argMetavar
@property (readonly, copy, nonatomic) NSString *helpDescription; // ivar: _helpDescription
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL required; // ivar: _required
@property (readonly, copy, nonatomic) NSString *shortName; // ivar: _shortName


+(id)optionWithName:(id)arg0 shortName:(id)arg1 argMetavar:(id)arg2 help:(id)arg3 ;
+(id)optionWithName:(id)arg0 shortName:(id)arg1 argMetavar:(id)arg2 help:(id)arg3 required:(BOOL)arg4 ;
+(id)optionWithName:(id)arg0 shortName:(id)arg1 help:(id)arg2 ;
-(id)description;
-(id)initWithName:(id)arg0 shortName:(id)arg1 argMetavar:(id)arg2 help:(id)arg3 required:(BOOL)arg4 ;


@end


#endif