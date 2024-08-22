// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCDUMPTYPE_H
#define TCDUMPTYPE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TCDumpType : NSObject {
    NSString *mName;
}




-(?)fromBinary:(?)arg0 toXmlstate;
-(?)fromXml:(?)arg0 toBinarystate;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)name;
-(void)setName:(id)arg0 ;


@end


#endif