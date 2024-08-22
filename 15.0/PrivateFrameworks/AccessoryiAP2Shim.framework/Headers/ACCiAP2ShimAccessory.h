// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCIAP2SHIMACCESSORY_H
#define ACCIAP2SHIMACCESSORY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ACCiAP2ShimAccessory : NSObject

@property (readonly) NSString *accessoryUID; // ivar: _accessoryUID
@property unsigned int connectionID; // ivar: _connectionID
@property (retain) id *context; // ivar: _context
@property BOOL dontPublish; // ivar: _dontPublish
@property (readonly) unsigned int featureTypeMask; // ivar: _featureTypeMask
@property (retain) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (retain) NSString *hardwareVersion; // ivar: _hardwareVersion
@property (readonly) NSString *keyAccessoryUID; // ivar: _keyAccessoryUID
@property (readonly) NSString *keyConnectionID; // ivar: _keyConnectionID
@property (readonly) NSString *keyTag; // ivar: _keyTag
@property (retain) NSString *manufacturer; // ivar: _manufacturer
@property (retain) NSString *model; // ivar: _model
@property (retain) NSString *name; // ivar: _name
@property (retain) NSString *serialNumber; // ivar: _serialNumber


-(id)accessoryInfoDict;
-(id)description;
-(id)initWithUID:(id)arg0 keyTag:(id)arg1 features:(unsigned int)arg2 ;
-(void)addFeature:(int)arg0 ;
-(void)removeFeature:(int)arg0 ;


@end


#endif